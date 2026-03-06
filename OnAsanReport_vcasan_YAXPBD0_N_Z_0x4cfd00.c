// 函数名称: ?OnAsanReport@__vcasan@@YAXPBD0_N@Z
// 虚拟地址: 0x4cfd00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")?OnAsanReport@__vcasan@@YAXPBD0_N@Z(int32_t arg1, int32_t arg2, uint32_t arg3, int32_t arg4, char arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d8b0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_74 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_38 = arg4
    uint32_t result
    uint32_t var_18
    
    if (sub_4cfa10(arg3).b == 0)
        result.b = 0
    else if (var_18 != 0)
        int32_t eax_5 = var_18 * 0xa8
        int128_t* edi_1 = sub_4cce80(eax_5)
        
        if (sub_4cd310(arg3, eax_5, edi_1).b != 0)
            char var_21_1 = 1
            uint32_t result_1 = 0
            
            if (var_18 u> 0)
                void* esi_1 = edi_1 + 4
                void* var_30_1 = esi_1
                
                while (true)
                    int32_t ecx = *(esi_1 - 4)
                    
                    if (ecx s< 0 || ecx s>= 0x23)
                        sub_4c5870("assetType >= 0 && assetType < ASSET_TYPE_COUNT", &data_83f3d3, 
                            "AssetTypeRegistry.cpp", 0xb6, "AssetTypeGetInfo")
                        
                        if (IsDebuggerPresent() != 1)
                            sub_4c5a30()
                            noreturn
                        
                        breakpoint
                    
                    void* edi_4 = (ecx << 5) + data_30785d4
                    void* ebx_2 = *(edi_4 + 0x1c)
                    char* result_2
                    sub_509d90(&result_2, esi_1 + 0x24, ecx, &result_2)
                    int32_t var_8_1 = 0
                    void* ebx_3
                    bool cond:2_1
                    
                    if (*esi_1 != *(ebx_2 + 0x18))
                        char* const result_3 = result_2
                        
                        if (result_3 == 0)
                            result_3 = &data_83f3d3
                        
                        char* const result_7 = result_3
                        sub_4c5680("Can't load pack asset because version doesn't match '%s'")
                        
                        if (arg5 != 0)
                            int32_t var_8_5 = 0xffffffff
                            result = result_2
                            var_21_1 = 0
                            
                            if (result != 0 && *result != 0)
                                result = sub_4c4060(&result_2)
                                int32_t temp2_1 = *(result + 4)
                                *(result + 4) -= 1
                                
                                if (temp2_1 == 1)
                                    int32_t esi_7 = *(result + 0xc) + 0x10
                                    sub_4f4430(result, sub_4f4380(esi_7), esi_7)
                            
                            break
                        
                        int32_t var_8_2 = 0xffffffff
                        char* result_4 = result_2
                        
                        if (result_4 != 0 && *result_4 != 0)
                            ebx_3 = sub_4c4060(&result_2)
                            int32_t temp3_1 = *(ebx_3 + 4)
                            *(ebx_3 + 4) -= 1
                            cond:2_1 = temp3_1 != 1
                        label_4cff1c:
                            
                            if (not(cond:2_1))
                                int32_t esi_5 = *(ebx_3 + 0xc) + 0x10
                                sub_4f4430(ebx_3, sub_4f4380(esi_5), esi_5)
                                esi_1 = var_30_1
                    else if ((*(edi_4 + 0x18) & 1) != 0 || *(esi_1 + 4) == *(edi_4 + 0x14))
                        char* const var_64 = &data_83f3d3
                        var_8_1.b = 1
                        sub_4c4510(&result_2)
                        int32_t var_48_1 = *(esi_1 + 0x18)
                        int32_t var_60_1 = *(esi_1 - 4)
                        int32_t var_4c_1 = *(esi_1 + 0x14)
                        int32_t var_5c_1 = *(esi_1 + 8)
                        int32_t var_44_1 = *(esi_1 + 0x1c)
                        int32_t var_40_1 = *(esi_1 + 0x20)
                        int32_t var_58_1 = *(esi_1 + 0xc)
                        int32_t var_54_1 = *(esi_1 + 0x10)
                        sub_4d0640(&var_64)
                        var_8_1.b = 0
                        char* const eax_12 = var_64
                        
                        if (eax_12 != 0 && *eax_12 != 0)
                            void* eax_14 = sub_4c4060(&var_64)
                            int32_t temp0_1 = *(eax_14 + 4)
                            *(eax_14 + 4) -= 1
                            
                            if (temp0_1 == 1)
                                int32_t esi_3 = *(eax_14 + 0xc) + 0x10
                                sub_4f4430(eax_14, sub_4f4380(esi_3), esi_3)
                                esi_1 = var_30_1
                        
                        int32_t var_8_4 = 0xffffffff
                        char* result_6 = result_2
                        
                        if (result_6 != 0 && *result_6 != 0)
                            ebx_3 = sub_4c4060(&result_2)
                            int32_t temp1_1 = *(ebx_3 + 4)
                            *(ebx_3 + 4) -= 1
                            cond:2_1 = temp1_1 != 1
                            goto label_4cff1c
                    else
                        char* result_5 = result_2
                        
                        if (result_5 == 0)
                            result_5 = &data_83f3d3
                        
                        char* result_8 = result_5
                        sub_4c5680("Can't load pack asset because hash doesn't match '%s'")
                        int32_t var_8_3 = 0xffffffff
                        int32_t* ecx_2 = &result_2
                        
                        if (arg5 != 0)
                            var_21_1 = 0
                            sub_4c43d0(ecx_2)
                            break
                        
                        sub_4c43d0(ecx_2)
                    result = result_1 + 1
                    esi_1 += 0xa8
                    result_1 = result
                    var_30_1 = esi_1
                    
                    if (result u>= var_18)
                        break
                    
                    continue
            
            if (edi_1 != 0)
                _aligned_free_base(edi_1)
            
            result.b = var_21_1
        else
            if (edi_1 != 0)
                _aligned_free_base(edi_1)
            
            result.b = 0
    else
        result.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
