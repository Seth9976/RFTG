// 函数名称: sub_4b1650
// 虚拟地址: 0x4b1650
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4b1650(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void var_32c
    void* var_348 = &var_32c
    int32_t var_34c = 3
    int32_t ecx
    int32_t edx
    int32_t eax_4 = sub_49dea0(arg2, edx, ecx, arg1)
    int32_t result = 0
    
    if (eax_4 s> 0)
        do
            int32_t var_328[0xc8]
            void* ecx_2 = var_328[result * 2]
            int32_t esi_1 = *(ecx_2 + 8)
            int32_t var_338_1 = *(ecx_2 + 0xc)
            
            if ((esi_1 & 0x100) != 0)
                int32_t* entry_ebx
                
                if ((esi_1 & 0x10) != 0)
                    *entry_ebx += sx.d(*(ecx_2 + 0x10))
                
                if ((*(ecx_2 + 8) & 8) != 0)
                    entry_ebx[1] += sx.d(*(ecx_2 + 0x10))
                
                if ((*(ecx_2 + 8) & 4) != 0)
                    entry_ebx[2] += sx.d(*(ecx_2 + 0x10))
                
                if ((*(ecx_2 + 8) & 2) != 0)
                    entry_ebx[3] += sx.d(*(ecx_2 + 0x10))
                
                if ((*(ecx_2 + 8) & 0x200) != 0)
                    entry_ebx[4] += sx.d(*(ecx_2 + 0x10))
            
            result += 1
        while (result s< eax_4)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
