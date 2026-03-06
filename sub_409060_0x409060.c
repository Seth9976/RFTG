// 函数名称: sub_409060
// 虚拟地址: 0x409060
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_409060()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f4e0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char const* const var_38 = *(data_27e7a54 + 0x208)
    char const* const result_2 = "gamesettingsstats_%d.bin"
    char* result_1
    char* result_5 = sub_4c4a50(&result_1, result_2)
    var_38 = nullptr
    result_2 = result_5
    int32_t var_8_1 = 0
    result_2 = result_1
    char* result_3 = result_1
    char const* const* var_18 = &result_2
    
    if (result_3 != 0 && *result_3 != 0)
        void* eax_5 = sub_4c4060(&result_2)
        *(eax_5 + 4) += 1
    
    char* result_4
    sub_500300(&result_4, result_2)
    var_8_1.b = 1
    int128_t* esi = data_27e7a5c
    
    if (esi == 0)
        var_38 = 0x10
        result_2 = 0xf4244
        int128_t* eax_6 = __execvp(result_2, var_38)
        
        if (eax_6 == 0)
            var_38 = "XMalloc"
            result_2 = 0x4f
            sub_4c5870("pBuffer", &data_83f3d3, "xMemory.cpp", result_2, var_38)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        esi = eax_6
        data_27e7a5c = esi
    
    var_38 = 0xf4244
    result_2 = nullptr
    sub_5abfc0(esi, result_2.b, var_38)
    result_2 = result_4
    char* var_1c
    char* edx = var_1c
    var_38 = edx
    char* ecx_3 = var_1c
    char const* const* var_18_1 = &result_2
    
    if (ecx_3 != 0 && *ecx_3 != 0)
        void* eax_9 = sub_4c4060(&var_38)
        *(eax_9 + 4) += 1
        esi = data_27e7a5c
    
    void* eax_10 = data_307ccc4
    sub_4cd670(eax_10, edx, esi, eax_10)
    var_8_1.b = 0
    char* eax_11 = var_1c
    
    if (eax_11 != 0 && *eax_11 != 0)
        int32_t* edi_1 = sub_4c4060(&var_1c)
        int32_t temp0_1 = edi_1[1]
        edi_1[1] -= 1
        
        if (temp0_1 == 1)
            char* esi_2 = edi_1[3] + 0x10
            int32_t* eax_14 = sub_4f4380(esi_2)
            var_38 = esi_2
            sub_4f4430(edi_1, eax_14, var_38)
    
    int32_t var_8_2 = 0xffffffff
    void* result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&result_1)
        int32_t temp1_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp1_1 == 1)
            char* esi_4 = *(result + 0xc) + 0x10
            int32_t* eax_17 = sub_4f4380(esi_4)
            var_38 = esi_4
            result = sub_4f4430(result, eax_17, var_38)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
