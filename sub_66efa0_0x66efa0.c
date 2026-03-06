// 函数名称: sub_66efa0
// 虚拟地址: 0x66efa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_66efa0(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint32_t eax_2 = zx.d(*(arg1 + 0x141))
    int32_t var_10 = 0x474e5089
    int32_t var_c = 0xa1a0a0d
    *(arg1 + 0x2ac) = 0x12
    int32_t result = sub_666640(arg1, &__saved_ebp + eax_2 - 0xc, 8 - eax_2)
    
    if (*(arg1 + 0x141) u< 3)
        *(arg1 + 0x6c) |= 0x1000
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
