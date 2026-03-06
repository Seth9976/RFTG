// 函数名称: sub_524d70
// 虚拟地址: 0x524d70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_524d70(int32_t* arg1 @ edi)
{
    // 第一条实际指令: int32_t* esi
    int32_t* esi
    
    if (*(sub_521460(esi) + 4) == 0)
        *arg1 = 0
        arg1[1] = 0
        arg1[2] = 0x3f800000
        arg1[3] = 0x3f800000
        return arg1
    
    long double x87_r7 = float.t(0)
    *arg1 = fconvert.s(x87_r7)
    arg1[1] = fconvert.s(x87_r7)
    arg1[2] = fconvert.s(fconvert.t(3238f))
    arg1[3] = fconvert.s(fconvert.t(2048f))
    return arg1
}
