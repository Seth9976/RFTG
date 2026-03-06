// 函数名称: sub_44a2e0
// 虚拟地址: 0x44a2e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_44a2e0(int32_t* arg1)
{
    // 第一条实际指令: long double x87_r7 = float.t(1)
    long double x87_r7 = float.t(1)
    long double temp0 = fconvert.t(arg1[0x1e])
    x87_r7 - temp0
    int16_t result
    
    if ((((x87_r7 < temp0 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp0) ? 1 : 0) << 0xa
            | (x87_r7 == temp0 ? 1 : 0) << 0xe):1.b & 0x41) != 0)
        if (*arg1 != 1)
            result.b = 0
            return result
        
        void* eax_1 = sub_418870(arg1[0x1f])
        
        if (sub_44a2e0(eax_1).b == 0 || *(eax_1 + 0x99) != 0)
            result.b = 0
            return result
    
    result.b = 1
    return result
}
