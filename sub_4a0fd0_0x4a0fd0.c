// 函数名称: sub_4a0fd0
// 虚拟地址: 0x4a0fd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4a0fd0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ecx
    ecx.b = *(*(arg4 + arg2 * 0x14 + 0x46c) + 0xe)
    void* edx_3 = *(arg4 + arg3 * 0x14 + 0x46c)
    int32_t result_1 = 0
    int32_t ebx
    
    if (ecx.b == *(edx_3 + 0xe))
        ebx = 0
    else
        ebx = sx.d(ecx.b)
    
    void var_32c
    void* var_358 = &var_32c
    int32_t var_35c = 3
    int32_t eax_4 = sub_49dea0(arg5, edx_3, ecx, arg4)
    int32_t result = 0
    
    if (eax_4 s> 0)
        do
            int32_t var_328[0xc8]
            void* edi_1 = var_328[result * 2]
            int32_t ecx_3 = *(edi_1 + 8)
            int32_t var_340_1 = *(edi_1 + 0xc)
            
            if ((ecx_3 & 0x100) != 0)
                if (((ecx_3 & 2) != 0 && ebx == 2) || ((ecx_3 & 4) != 0 && ebx == 3)
                        || ((ecx_3 & 8) != 0 && ebx == 4) || ((ecx_3 & 0x10) != 0 && ebx == 5))
                    result_1 += sx.d(*(edi_1 + 0x10))
                else if ((ecx_3 & 0x200) != 0 && (*(*(arg4 + arg2 * 0x14 + 0x46c) + 0x10) & 0x40) != 0
                        && (*(*(arg4 + arg3 * 0x14 + 0x46c) + 0x10) & 0x40) == 0)
                    result_1 += sx.d(*(edi_1 + 0x10))
            
            result += 1
        while (result s< eax_4)
        
        result = result_1
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
