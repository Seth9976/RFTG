// 函数名称: sub_56c600
// 虚拟地址: 0x56c600
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_56c600(float* arg1 @ esi, float* arg2 @ edi)
{
    // 第一条实际指令: POINT point
    POINT point
    BOOL result = GetCursorPos(&point)
    
    if (result != 0)
        int32_t* entry_ebx
        int32_t X = *entry_ebx
        int32_t ecx_2 = point.x - X
        int32_t Y = entry_ebx[1]
        int32_t edx_2 = point.y - Y
        result = SetCursorPos(X, Y)
        long double x87_r6_1 = fconvert.t(0.004999999888241291)
        *arg2 = fconvert.s(fconvert.t(*arg2) - float.t(ecx_2) * x87_r6_1)
        *arg1 = fconvert.s(x87_r6_1 * float.t(edx_2) + fconvert.t(*arg1))
    
    return result
}
