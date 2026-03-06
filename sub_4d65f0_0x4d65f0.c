// 函数名称: sub_4d65f0
// 虚拟地址: 0x4d65f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_4d65f0(int32_t* arg1 @ edi)
{
    // 第一条实际指令: void* eax = data_27e7fd4
    void* eax = data_27e7fd4
    float var_c = fconvert.s(fconvert.t(*(eax + 0x1c)))
    
    if (*(arg1 + 0x57) != 0)
        var_c = fconvert.s(fconvert.t(*(eax + 0x20)))
    
    void* eax_1 = sub_4d6c80(*arg1)
    void* eax_2 = sub_4d6c80(arg1[1])
    float var_8 = fconvert.s(fconvert.t(*(eax_1 + 4)))
    
    if (eax_2 != eax_1)
        var_8 = fconvert.s(fconvert.t(*(eax_2 + 4)) * fconvert.t(var_8))
    
    float var_10 = fconvert.s(fconvert.t(*(data_27e7fd4 + 0x24)))
    
    if (*(arg1 + 0x59) != 0)
        var_10 = fconvert.s(float.t(1))
    
    return sub_465dd0(
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg1[0x10]) * fconvert.t(var_c) * fconvert.t(var_8)
            * fconvert.t(var_10) * fconvert.t(arg1[0xe])))), 
        fconvert.s(float.t(0)), fconvert.s(fconvert.t(4f)))
}
