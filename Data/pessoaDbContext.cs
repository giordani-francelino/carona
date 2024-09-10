/// <summary>
/// Uma classe que herda "DbContext" para interagir e realizar operações de banco de dados. 
/// A classe também substitui o método OnModelCreating() para que o banco de dados possa ter alguns dados iniciais (seed data) para fins de teste.
/// </summary>
/// 

using Microsoft.EntityFrameworkCore;

namespace carona.Data;

public class PessoaDbContext : DbContext{
    #region Construtor
    public PessoaDbContext(DbContextOptions<PessoaDbContext> options): base(options){

    }
    #endregion

    #region Propriedades
    public DbSet<Pessoa> Pessoa { get; set; }
    #endregion

    #region Métodos sobrecarregados
    protected override void OnModelCreating(ModelBuilder modelBuilder){
        modelBuilder.Entity<Pessoa>().HasData(RetornaPessoas());
        base.OnModelCreating(modelBuilder);
    }
    #endregion


    #region Métodos privados
    private List<Pessoa> RetornaPessoas(){
        return new List<Pessoa>{
        new Pessoa { Id = 1001, Nome = "Pedro", Email = "pedro@servidor.com.br", Logradouro = "Alameda Brasil", Cpf = "12345678910"},
        new Pessoa { Id = 1002, Nome = "Ana", Email = "ana@servidor.com.br", Logradouro = "Praça João XXIII", Cpf = "45678912310"},
        new Pessoa { Id = 1003, Nome = "José", Email = "jose@servidor.com.br", Logradouro = "Rua José Tomaz", Cpf = "78912345610"}
    };
    }
    #endregion
}