// 函数名称: sub_6710d0
// 虚拟地址: 0x6710d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6710d0(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (arg4 s>= 2)
        sub_664100(arg1, "Unrecognized unit type for pHYs chunk")
    
    uint8_t var_14 = (arg2 u>> 0x18).b
    uint8_t var_13 = (arg2 u>> 0x10).b
    char var_11 = arg2.b
    int32_t result = arg3
    uint8_t var_12 = (arg2 u>> 8).b
    uint8_t var_10 = (result u>> 0x18).b
    uint8_t var_f = (result u>> 0x10).b
    uint8_t var_e = (result u>> 8).b
    char var_d = result.b
    char var_c = arg4.b
    
    if (arg1 != 0)
        sub_66f010(arg1, 9)
        sub_666640(arg1, &var_14, 9)
        sub_662280(arg1, &var_14, 9)
        result = sub_66f0f0(arg1)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
