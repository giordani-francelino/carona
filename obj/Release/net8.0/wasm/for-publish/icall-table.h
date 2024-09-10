#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
264,
276,
277,
278,
279,
280,
281,
282,
283,
284,
287,
288,
289,
465,
466,
467,
497,
498,
499,
519,
520,
521,
522,
639,
640,
641,
644,
700,
701,
702,
705,
707,
709,
711,
716,
724,
725,
726,
727,
728,
729,
730,
731,
732,
733,
734,
735,
736,
737,
738,
739,
740,
742,
743,
744,
745,
746,
747,
748,
845,
846,
847,
848,
849,
850,
851,
852,
853,
854,
855,
856,
857,
858,
859,
860,
861,
863,
864,
865,
866,
867,
868,
869,
936,
937,
1006,
1013,
1016,
1018,
1024,
1025,
1027,
1028,
1032,
1034,
1037,
1038,
1040,
1042,
1043,
1046,
1047,
1048,
1051,
1053,
1056,
1058,
1060,
1067,
1072,
1147,
1149,
1151,
1161,
1162,
1163,
1164,
1166,
1173,
1174,
1175,
1176,
1177,
1185,
1186,
1187,
1191,
1192,
1195,
1199,
1200,
1201,
1485,
1706,
1707,
9987,
9988,
9990,
9991,
9992,
9993,
9994,
9995,
9997,
9999,
10001,
10002,
10003,
10014,
10016,
10021,
10023,
10025,
10027,
10078,
10084,
10085,
10087,
10088,
10089,
10090,
10091,
10093,
10095,
11291,
11295,
11297,
11298,
11299,
11300,
11567,
11568,
11569,
11570,
11591,
11592,
11593,
11595,
11597,
11659,
11750,
11752,
11754,
11764,
11765,
11766,
11767,
11768,
12239,
12240,
12245,
12246,
12287,
12325,
12332,
12339,
12350,
12354,
12380,
12461,
12468,
12470,
12482,
12484,
12485,
12486,
12493,
12509,
12529,
12530,
12538,
12540,
12547,
12548,
12551,
12553,
12558,
12564,
12565,
12572,
12574,
12586,
12589,
12590,
12591,
12602,
12611,
12617,
12618,
12619,
12621,
12622,
12639,
12641,
12655,
12678,
12679,
12680,
12705,
12710,
12740,
12741,
13411,
13425,
13522,
13523,
13746,
13747,
13755,
13756,
13757,
13763,
13862,
14494,
14495,
15127,
15129,
15130,
15135,
15145,
16607,
16628,
16630,
16632,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_IsValueOfElementTypeInternal (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_InitializeInternal_raw (int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
int ves_icall_System_GC_GetCollectionCount (int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Acos (double);
double ves_icall_System_Math_Acosh (double);
double ves_icall_System_Math_Asin (double);
double ves_icall_System_Math_Asinh (double);
double ves_icall_System_Math_Atan (double);
double ves_icall_System_Math_Atan2 (double,double);
double ves_icall_System_Math_Atanh (double);
double ves_icall_System_Math_Cbrt (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Cosh (double);
double ves_icall_System_Math_Exp (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sinh (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_Tanh (double);
double ves_icall_System_Math_FusedMultiplyAdd (double,double,double);
double ves_icall_System_Math_Log2 (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Acos (float);
float ves_icall_System_MathF_Acosh (float);
float ves_icall_System_MathF_Asin (float);
float ves_icall_System_MathF_Asinh (float);
float ves_icall_System_MathF_Atan (float);
float ves_icall_System_MathF_Atan2 (float,float);
float ves_icall_System_MathF_Atanh (float);
float ves_icall_System_MathF_Cbrt (float);
float ves_icall_System_MathF_Ceiling (float);
float ves_icall_System_MathF_Cos (float);
float ves_icall_System_MathF_Cosh (float);
float ves_icall_System_MathF_Exp (float);
float ves_icall_System_MathF_Floor (float);
float ves_icall_System_MathF_Log (float);
float ves_icall_System_MathF_Log10 (float);
float ves_icall_System_MathF_Pow (float,float);
float ves_icall_System_MathF_Sin (float);
float ves_icall_System_MathF_Sinh (float);
float ves_icall_System_MathF_Sqrt (float);
float ves_icall_System_MathF_Tan (float);
float ves_icall_System_MathF_Tanh (float);
float ves_icall_System_MathF_FusedMultiplyAdd (float,float,float);
float ves_icall_System_MathF_Log2 (float);
float ves_icall_System_MathF_ModF (float,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
void ves_icall_RuntimeType_GetInterfaceMapData_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetPacking_raw (int,int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_System_RuntimeType_AllocateValueType_raw (int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_IsUnmanagedFunctionPointerInternal (int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Decrement_Long (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Read_Long (int);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_StartInternal_raw (int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
void ves_icall_System_Runtime_InteropServices_Marshal_PtrToStructureInternal_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetEntryPoint_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
int ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_CustomAttributeBuilder_GetBlob_raw (int,int,int,int,int,int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsAttached_internal ();
int ves_icall_System_Diagnostics_Debugger_IsLogging ();
void ves_icall_System_Diagnostics_Debugger_Log (int,int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 264,
ves_icall_System_Array_InternalCreate,
// token 276,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 277,
ves_icall_System_Array_IsValueOfElementTypeInternal,
// token 278,
ves_icall_System_Array_CanChangePrimitive,
// token 279,
ves_icall_System_Array_FastCopy,
// token 280,
ves_icall_System_Array_GetLengthInternal_raw,
// token 281,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 282,
ves_icall_System_Array_GetGenericValue_icall,
// token 283,
ves_icall_System_Array_GetValueImpl_raw,
// token 284,
ves_icall_System_Array_SetGenericValue_icall,
// token 287,
ves_icall_System_Array_SetValueImpl_raw,
// token 288,
ves_icall_System_Array_InitializeInternal_raw,
// token 289,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 465,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 466,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 467,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 497,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 498,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 499,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 519,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 520,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 521,
ves_icall_System_Enum_InternalGetCorElementType,
// token 522,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 639,
ves_icall_System_Environment_get_ProcessorCount,
// token 640,
ves_icall_System_Environment_get_TickCount,
// token 641,
ves_icall_System_Environment_get_TickCount64,
// token 644,
ves_icall_System_Environment_FailFast_raw,
// token 700,
ves_icall_System_GC_GetCollectionCount,
// token 701,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 702,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 705,
ves_icall_System_GC_SuppressFinalize_raw,
// token 707,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 709,
ves_icall_System_GC_GetGCMemoryInfo,
// token 711,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 716,
ves_icall_System_Object_MemberwiseClone_raw,
// token 724,
ves_icall_System_Math_Acos,
// token 725,
ves_icall_System_Math_Acosh,
// token 726,
ves_icall_System_Math_Asin,
// token 727,
ves_icall_System_Math_Asinh,
// token 728,
ves_icall_System_Math_Atan,
// token 729,
ves_icall_System_Math_Atan2,
// token 730,
ves_icall_System_Math_Atanh,
// token 731,
ves_icall_System_Math_Cbrt,
// token 732,
ves_icall_System_Math_Ceiling,
// token 733,
ves_icall_System_Math_Cos,
// token 734,
ves_icall_System_Math_Cosh,
// token 735,
ves_icall_System_Math_Exp,
// token 736,
ves_icall_System_Math_Floor,
// token 737,
ves_icall_System_Math_Log,
// token 738,
ves_icall_System_Math_Log10,
// token 739,
ves_icall_System_Math_Pow,
// token 740,
ves_icall_System_Math_Sin,
// token 742,
ves_icall_System_Math_Sinh,
// token 743,
ves_icall_System_Math_Sqrt,
// token 744,
ves_icall_System_Math_Tan,
// token 745,
ves_icall_System_Math_Tanh,
// token 746,
ves_icall_System_Math_FusedMultiplyAdd,
// token 747,
ves_icall_System_Math_Log2,
// token 748,
ves_icall_System_Math_ModF,
// token 845,
ves_icall_System_MathF_Acos,
// token 846,
ves_icall_System_MathF_Acosh,
// token 847,
ves_icall_System_MathF_Asin,
// token 848,
ves_icall_System_MathF_Asinh,
// token 849,
ves_icall_System_MathF_Atan,
// token 850,
ves_icall_System_MathF_Atan2,
// token 851,
ves_icall_System_MathF_Atanh,
// token 852,
ves_icall_System_MathF_Cbrt,
// token 853,
ves_icall_System_MathF_Ceiling,
// token 854,
ves_icall_System_MathF_Cos,
// token 855,
ves_icall_System_MathF_Cosh,
// token 856,
ves_icall_System_MathF_Exp,
// token 857,
ves_icall_System_MathF_Floor,
// token 858,
ves_icall_System_MathF_Log,
// token 859,
ves_icall_System_MathF_Log10,
// token 860,
ves_icall_System_MathF_Pow,
// token 861,
ves_icall_System_MathF_Sin,
// token 863,
ves_icall_System_MathF_Sinh,
// token 864,
ves_icall_System_MathF_Sqrt,
// token 865,
ves_icall_System_MathF_Tan,
// token 866,
ves_icall_System_MathF_Tanh,
// token 867,
ves_icall_System_MathF_FusedMultiplyAdd,
// token 868,
ves_icall_System_MathF_Log2,
// token 869,
ves_icall_System_MathF_ModF,
// token 936,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 937,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 1006,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 1013,
ves_icall_RuntimeType_make_array_type_raw,
// token 1016,
ves_icall_RuntimeType_make_byref_type_raw,
// token 1018,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 1024,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 1025,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 1027,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 1028,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 1032,
ves_icall_RuntimeType_GetInterfaceMapData_raw,
// token 1034,
ves_icall_RuntimeType_GetPacking_raw,
// token 1037,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 1038,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 1040,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 1042,
ves_icall_System_RuntimeType_getFullName_raw,
// token 1043,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 1046,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 1047,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 1048,
ves_icall_RuntimeType_GetFields_native_raw,
// token 1051,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 1053,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 1056,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 1058,
ves_icall_RuntimeType_GetName_raw,
// token 1060,
ves_icall_RuntimeType_GetNamespace_raw,
// token 1067,
ves_icall_RuntimeType_IsUnmanagedFunctionPointerInternal,
// token 1072,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 1147,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 1149,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 1151,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 1161,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 1162,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 1163,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 1164,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 1166,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 1173,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 1174,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 1175,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 1176,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 1177,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 1185,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 1186,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 1187,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 1191,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 1192,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 1195,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 1199,
ves_icall_System_String_FastAllocateString_raw,
// token 1200,
ves_icall_System_String_InternalIsInterned_raw,
// token 1201,
ves_icall_System_String_InternalIntern_raw,
// token 1485,
ves_icall_System_Type_internal_from_handle_raw,
// token 1706,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1707,
ves_icall_System_ValueType_Equals_raw,
// token 9987,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 9988,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 9990,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 9991,
ves_icall_System_Threading_Interlocked_Decrement_Long,
// token 9992,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 9993,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 9994,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 9995,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 9997,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 9999,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 10001,
ves_icall_System_Threading_Interlocked_Read_Long,
// token 10002,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 10003,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 10014,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 10016,
mono_monitor_exit_icall_raw,
// token 10021,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 10023,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 10025,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 10027,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 10078,
ves_icall_System_Threading_Thread_StartInternal_raw,
// token 10084,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 10085,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 10087,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 10088,
ves_icall_System_Threading_Thread_GetState_raw,
// token 10089,
ves_icall_System_Threading_Thread_SetState_raw,
// token 10090,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 10091,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 10093,
ves_icall_System_Threading_Thread_YieldInternal,
// token 10095,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 11291,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 11295,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 11297,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 11298,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 11299,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 11300,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 11567,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 11568,
ves_icall_System_GCHandle_InternalFree_raw,
// token 11569,
ves_icall_System_GCHandle_InternalGet_raw,
// token 11570,
ves_icall_System_GCHandle_InternalSet_raw,
// token 11591,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 11592,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 11593,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 11595,
ves_icall_System_Runtime_InteropServices_Marshal_PtrToStructureInternal_raw,
// token 11597,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 11659,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 11750,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 11752,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 11754,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 11764,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 11765,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 11766,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 11767,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw,
// token 11768,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 12239,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 12240,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 12245,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 12246,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 12287,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 12325,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 12332,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 12339,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 12350,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 12354,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 12380,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 12461,
ves_icall_System_Reflection_RuntimeAssembly_GetEntryPoint_raw,
// token 12468,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 12470,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 12482,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 12484,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 12485,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 12486,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 12493,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 12509,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 12529,
ves_icall_reflection_get_token_raw,
// token 12530,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 12538,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 12540,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 12547,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 12548,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 12551,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 12553,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 12558,
ves_icall_reflection_get_token_raw,
// token 12564,
ves_icall_get_method_info_raw,
// token 12565,
ves_icall_get_method_attributes,
// token 12572,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 12574,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 12586,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 12589,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 12590,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 12591,
ves_icall_reflection_get_token_raw,
// token 12602,
ves_icall_InternalInvoke_raw,
// token 12611,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 12617,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 12618,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 12619,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 12621,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 12622,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 12639,
ves_icall_InvokeClassConstructor_raw,
// token 12641,
ves_icall_InternalInvoke_raw,
// token 12655,
ves_icall_reflection_get_token_raw,
// token 12678,
ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw,
// token 12679,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 12680,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 12705,
ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw,
// token 12710,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 12740,
ves_icall_reflection_get_token_raw,
// token 12741,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 13411,
ves_icall_CustomAttributeBuilder_GetBlob_raw,
// token 13425,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 13522,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 13523,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 13746,
ves_icall_ModuleBuilder_basic_init_raw,
// token 13747,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 13755,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 13756,
ves_icall_ModuleBuilder_getToken_raw,
// token 13757,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 13763,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 13862,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 14494,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 14495,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 15127,
ves_icall_System_Diagnostics_Debugger_IsAttached_internal,
// token 15129,
ves_icall_System_Diagnostics_Debugger_IsLogging,
// token 15130,
ves_icall_System_Diagnostics_Debugger_Log,
// token 15135,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 15145,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 16607,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 16628,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 16630,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 16632,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
0,
4,
4,
0,
4,
0,
4,
4,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
0,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
};
