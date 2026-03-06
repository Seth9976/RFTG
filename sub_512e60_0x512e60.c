// 函数名称: sub_512e60
// 虚拟地址: 0x512e60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_512e60(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68c948
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* result_1
    char* result_2 = result_1
    int32_t ecx = *(result_2 + 0x148)
    
    if (ecx s<= 0)
        sub_4c5870("emitResults.currentFunctionStackDepth > 0", &data_83f3d3, "MaterialFnDef.cpp", 
            0x356, "EmitFnLine")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t var_8_1 = 0
    sub_4c4510(sub_4c48a0(arg1, &result_1, &result_2[(*(result_2 + (ecx << 2) + 0x104) << 3) + 8]))
    int32_t var_8_2 = 0xffffffff
    char* result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&result_1)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(result + 0xc) + 0x10
            result = sub_4f4430(result, sub_4f4380(esi_2), esi_2)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
