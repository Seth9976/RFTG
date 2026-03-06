// 函数名称: sub_65f2a0
// 虚拟地址: 0x65f2a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_65f2a0(void* arg1 @ esi)
{
    // 第一条实际指令: int32_t eax_8 = *(arg1 + 0x58)
    int32_t eax_8 = *(arg1 + 0x58)
    
    if (eax_8 s> 3)
        return 0
    
    if (eax_8 s< 3)
        return 0xffffff7f
    
    void* var_8
    
    if (*(arg1 + 4) == 0)
        var_8 = *(arg1 + 0x48)
    else
        var_8 = (*(arg1 + 0x60) << 5) + *(arg1 + 0x48)
    
    if (sub_64b6b0(arg1 + 0x1e0, var_8) != 0)
        return 0xffffff77
    
    sub_649a50(arg1 + 0x1e0, arg1 + 0x250)
    long double x87_r7 = float.t(0)
    *(arg1 + 0x68) = fconvert.d(x87_r7)
    *(arg1 + 0x70) = fconvert.d(x87_r7)
    *(arg1 + 0x58) = 4
    return 0
}
