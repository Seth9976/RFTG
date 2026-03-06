// 函数名称: sub_471280
// 虚拟地址: 0x471280
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_471280(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void var_32c
    void* var_338 = &var_32c
    int32_t var_33c = 5
    int32_t ecx
    int32_t edx
    int32_t result = sub_49dea0(arg2, edx, ecx, arg1)
    int32_t edx_1 = 0
    
    if (result s> 0)
        do
            int32_t var_328[0xc8]
            
            if ((*(var_328[edx_1 * 2] + 8) & 0x80) != 0)
                result.b = 1
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return result
            
            edx_1 += 1
        while (edx_1 s< result)
    
    result.b = 0
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
