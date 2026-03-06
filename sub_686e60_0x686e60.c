// 函数名称: sub_686e60
// 虚拟地址: 0x686e60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_686e60(int32_t arg1 @ mxcsr, int16_t arg2 @ x87control)
{
    // 第一条实际指令: if (data_3166ed8 == 0)
    if (data_3166ed8 == 0)
        return sub_686eef() __tailcall
    
    int32_t eax_2 = arg1 & 0x7f80
    bool cond:0 = eax_2 != 0x1f80
    
    if (eax_2 == 0x1f80)
        int16_t x87status_2
        int16_t temp0_1
        temp0_1, x87status_2 = __fnstcw_memmem16(arg2)
        eax_2.w = temp0_1
        eax_2.w &= 0x7f
        cond:0 = eax_2.w != 0x7f
    
    if (cond:0)
        return sub_686eef() __tailcall
    
    return sub_68a088() __tailcall
}
