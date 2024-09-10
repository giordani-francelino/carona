
using Microsoft.EntityFrameworkCore;

namespace carona.Data;
public class PessoaServices
{
    #region Métodos privados
    private PessoaDbContext dbContext;
    #endregion

    #region Construtor
    public PessoaServices(PessoaDbContext dbContext)
    {
        this.dbContext = dbContext;
    }
    #endregion

    #region Metodos Publicos 
    /// <summary>
    /// Retorna a lista de Pessoas
    /// </summary>
    /// <returns></returns>
    public async Task<List<Pessoa>> RetornaPessoaAsync()
    {
        return await dbContext.Pessoa.ToListAsync();
    }

    /// <summary>
    /// Adiciona um novo Pessoa para DbContext e o salva
    /// </summary>
    /// <param name="prod"></param>
    /// <returns></returns>
    public async Task<Pessoa> AddProductAsync(Pessoa prod)
    {
        try
        {
            dbContext.Pessoa.Add(prod);
            await dbContext.SaveChangesAsync();
        }
        catch (Exception)
        {
            throw;
        }
        return prod;
    }

    /// <summary>
    /// Atualiza um Pessoa e salva as mudanças
    /// </summary>
    /// <param name="prod"></param>
    /// <returns></returns>
    public async Task<Pessoa> UpdateProductAsync(Pessoa prod)
    {
        try
        {
            var productExist = dbContext.Pessoa.FirstOrDefault(p => p.Id == prod.Id);
            if (productExist != null)
            {
                dbContext.Update(prod);
                await dbContext.SaveChangesAsync();
            }
        }
        catch (Exception)
        {
            throw;
        }
        return prod;
    }

    /// <summary>
    /// Remove um Pessoa de DbContext e o salva
    /// </summary>
    /// <param name="Pessoa"></param>
    /// <returns></returns>
    public async Task DeleteProductAsync(Pessoa Pessoa)
    {
        try
        {
            dbContext.Pessoa.Remove(Pessoa);
            await dbContext.SaveChangesAsync();
        }
        catch (Exception)
        {
            throw;
        }
    }
    #endregion
}
