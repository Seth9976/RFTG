// 函数名称: sub_49f030
// 虚拟地址: 0x49f030
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_49f030(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, char arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_428 = 3
    sub_49cc30(arg3, arg2, arg3 + arg2 * 0x14 + 0x464, arg4)
    void* result = arg3 + arg2 * 0x14 + 0x464
    *(result + 4) |= 0x3f
    *(result + 0xf) = *(arg4 * 0xb4 + arg3 + 0xb6)
    *(arg4 * 0xb4 + arg3 + 0xb6) += 1
    
    if (*(arg3 + 0x18) == 0)
        if (arg5 == 0)
            sub_49bda0(arg4)
        else
            sub_49b500(arg4)
        
        result = arg3 + arg2 * 0x14 + 0x464
    
    if ((*(*(result + 8) + 0x10) & 2) != 0)
        sub_49df80(arg3, arg2)
        result = arg3 + arg2 * 0x14 + 0x464
    
    if (*(arg3 + 0x45a) == 3)
        int32_t* ecx_4 = *(result + 8)
        
        if ((ecx_4[4] & 0x1000) != 0)
            int32_t var_428_4 = *ecx_4
            void var_40c
            sub_49d110(sub_5a733b(&var_40c, "placing %s"), arg4, &var_40c, arg3, arg4)
            result = arg3 + arg2 * 0x14 + 0x464
    
    *(result + 4) |= 0x40
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
