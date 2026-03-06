// 函数名称: sub_52b650
// 虚拟地址: 0x52b650
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_52b650()
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_6919db
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_19c
    int32_t eax_2 = __security_cookie ^ &var_19c
    int32_t __saved_edi
    int32_t var_1ac = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ecx
    int32_t edx
    char* eax_6 = *(sub_530500(ecx, edx) + 0x1460)
    char* const var_194 = &data_83f3d3
    
    if (eax_6 != 0)
        var_194 = eax_6
    
    if (data_30da51c s<= 0)
        sub_4c5870("gUI2Editor.s.activeSetCount > 0", &data_83f3d3, "UI2.cpp", 0x12d7, 
            "UI2EditorTextboxCommit")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* eax_9 = sub_528f30(data_30d951c)
    eax_9[0x677]
    int32_t edi = *(sub_52ae50(data_30da528) + 4)
    char* edx_2 = *sub_521460(*eax_9)
    float ecx_1 = eax_9[1] * 3
    uint32_t result = edi - 0x64
    int32_t* esi_2 = &edx_2[ecx_1 << 2]
    float var_198 = esi_2
    
    if (result u<= 0x7f)
        result = zx.d(lookup_table_52b948[result])
        void var_190
        char* var_180
        int32_t* eax_16
        
        switch (result)
            case 0
                var_198 = &data_83f3d3
                int32_t var_c_1 = 0
                void* edx_3 = sub_4c4590(var_194)
                float eax_13 = var_198
                
                if (eax_13 == 0)
                    eax_13 = &data_83f3d3
                
                float var_1b0_1 = eax_13
                int32_t var_1b4_1 = edi
                sub_530b60(esi_2, edx_3, ecx_1, &data_8c00ec)
                sub_528280(1)
                int32_t var_c_2 = 0xffffffff
                result = sub_4c43d0(&var_198)
            case 1
                char* const var_1b0_11 = var_194
                result, ecx_1, edx_2 = sub_52b4b0(&var_190, edx_2)
                
                if (result.b != 0)
                    void* var_1b0_12 = &var_190
                    eax_16 = esi_2
                    goto label_52b8e2
            case 2
                float* var_1b0_4 = &var_198
                result = sub_5a957c(var_194, 0x88cec4)
                
                if (result == 1)
                    var_198 = fconvert.s(sub_465dd0(fconvert.s(fconvert.t(var_198)), 
                        fconvert.s(float.t(0)), fconvert.s(float.t(1))))
                    sub_530d60(esi_2, fconvert.s(fconvert.t(var_198)))
                    result = sub_528280(1)
            case 3
                float* var_1b0_2 = &var_198
                int32_t ecx_3
                result, ecx_3 = sub_5a957c(var_194, 0x88cec4)
                
                if (result == 1)
                    int32_t var_1b0_3 = ecx_3
                    sub_530d60(esi_2, fconvert.s(fconvert.t(var_198)))
                    result = sub_528280(1)
            case 4
                result, ecx_1, edx_2 = sub_52b500(&var_194, var_194)
                
                if (result.b != 0)
                    char* const* var_1b0_16 = &var_194
                    eax_16 = var_198
                    goto label_52b8e2
            case 5
                var_180 = var_194
                int32_t var_17c_1 = 0
                int32_t var_24_1 = 0
                char** var_1b0_13 = &var_180
                eax_16 = esi_2
            label_52b8e2:
                int32_t var_1b4_4 = edi
                sub_530b60(eax_16, edx_2, ecx_1, &data_8c00ec)
                result = sub_528280(1)
            case 6
                edx_2 = var_194
                int32_t var_17c_2 = 0
                int32_t var_24_2 = 0
                int32_t* var_1b0_14 = &var_180
                var_180 = edx_2
                eax_16 = esi_2
                goto label_52b8e2
            case 7
                char* const eax_15 = var_194
                float* var_1b0_7 = &var_198
                var_198 = 0f
                result, edx_2 = sub_5a957c(eax_15, 0x88cefc)
                
                if (result == 1)
                    ecx_1 = var_198
                    float var_1b0_8 = ecx_1
                    eax_16 = esi_2
                    goto label_52b8e2
            case 8
                result, ecx_1, edx_2 = sub_52b440(&var_190, var_194)
                
                if (result.b != 0)
                    void* var_1b0_10 = &var_190
                    eax_16 = var_198
                    goto label_52b8e2
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_19c)
    return result
}
