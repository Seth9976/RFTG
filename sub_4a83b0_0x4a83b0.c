// 函数名称: sub_4a83b0
// 虚拟地址: 0x4a83b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4a83b0(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t esi = arg2
    int32_t eax_8
    
    if (arg4 != 1)
        void var_330
        void* var_35c_4 = &var_330
        int32_t var_360_1 = 4
        int32_t var_334_1 = arg4
        int32_t ecx
        int32_t edx
        int32_t eax_12 = sub_49dea0(esi, edx, ecx, arg1)
        int32_t ebx_2 = 0
        
        if (eax_12 s> 0)
            do
                int32_t var_32c[0xc8]
                void* esi_2 = var_32c[ebx_2 * 2]
                
                if (arg5 == 0)
                    int32_t eax_13 = *(esi_2 + 8)
                    int32_t var_344_1 = *(esi_2 + 0xc)
                    
                    if ((eax_13 & 1) != 0)
                        var_334_1 += sx.d(*(esi_2 + 0x10))
                    
                    if (arg4 != 2)
                        if (arg4 != 3)
                            if (arg4 != 4)
                                if (arg4 != 5)
                                    goto label_4a854b
                                
                                if ((eax_13 & 0x10) != 0)
                                    goto label_4a8545
                            else
                                if ((eax_13 & 8) != 0)
                                    goto label_4a8545
                                
                            label_4a8555:
                                
                                if ((eax_13 & 0x40) != 0)
                                    var_334_1 += sub_49c940(arg2, 0x800, arg1)
                        else if ((eax_13 & 4) != 0)
                            goto label_4a8545
                    else if ((eax_13 & arg4) != 0)
                    label_4a8545:
                        var_334_1 += sx.d(*(esi_2 + 0x10))
                    label_4a854b:
                        
                        if (arg4 == 4)
                            goto label_4a8555
                
                ebx_2 += 1
            while (ebx_2 s< eax_12)
            
            esi = arg2
        
        void* ecx_24 = *(arg3 + 8)
        int32_t i_2 = sx.d(*(ecx_24 + 0x15))
        
        if (i_2 s> 0)
            void* ecx_25 = ecx_24 + 0x28
            int32_t i_1 = i_2
            int32_t i
            
            do
                if (*(ecx_25 - 0x10) == 4 && arg5 == 0 && (*(ecx_25 - 8) & 0x20) != 0)
                    var_334_1 += sx.d(*ecx_25)
                
                ecx_25 += 0x18
                i = i_1
                i_1 -= 1
            while (i != 1)
            esi = arg2
        
        if (*(esi * 0xb4 + arg1 + 0x2c) == 0x87 || *(esi * 0xb4 + arg1 + 0x30) == 0x87)
            var_334_1 += 3
        
        eax_8 = var_334_1
    else
        int32_t eax_3 = sub_4a83b0(arg1, esi, arg3, 5, arg5)
        int32_t eax_5 = sub_4a83b0(arg1, esi, arg3, 4, arg5)
        int32_t eax_6 = sub_4a83b0(arg1, esi, arg3, 3, arg5)
        eax_8 = sub_4a83b0(arg1, esi, arg3, 2, arg5)
        int32_t edi_2 = eax_8
        
        if (eax_8 s<= eax_6)
            edi_2 = eax_6
        
        int32_t ecx_2 = eax_3
        
        if (eax_3 s<= eax_5)
            ecx_2 = eax_5
        
        if (edi_2 s<= ecx_2)
            eax_8 = eax_3
            
            if (eax_3 s<= eax_5)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_5
        else if (eax_8 s<= eax_6)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_6
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_8
}
