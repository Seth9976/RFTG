// 函数名称: sub_66f010
// 虚拟地址: 0x66f010
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_66f010(void* arg1 @ esi, void* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* result = arg2
    
    if (arg1 != 0)
        uint8_t var_10 = (result u>> 0x18).b
        uint8_t var_f_1 = (result u>> 0x10).b
        uint8_t var_e_1 = (result u>> 8).b
        char var_d_1 = result.b
        int32_t entry_ebx
        uint8_t var_c = (entry_ebx u>> 0x18).b
        *(arg1 + 0x2ac) = 0x22
        uint8_t var_b_1 = (entry_ebx u>> 0x10).b
        uint8_t var_a_1 = (entry_ebx u>> 8).b
        char var_9_1 = entry_ebx.b
        sub_666640(arg1, &var_10, 8)
        *(arg1 + 0x100) = entry_ebx
        sub_662260(arg1)
        result = sub_662280(arg1, &var_c, 4)
        *(arg1 + 0x2ac) = 0x42
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
