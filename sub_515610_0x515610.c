// 函数名称: sub_515610
// 虚拟地址: 0x515610
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_515610(void* arg1, float arg2)
{
    // 第一条实际指令: void** i = *(arg1 + 4)
    void** i = *(arg1 + 4)
    
    if (i == 0)
        return 
    
    long double x87_r6_1 = fconvert.t(data_8c4d34)
    
    do
        void* edx_1 = *i
        int32_t ecx_1 = *(edx_1 + 0x20)
        i = i[1]
        
        if (ecx_1 != 2 && ecx_1 != 4)
            *(edx_1 + 0x18) =
                fconvert.s(fneg(fconvert.t(*(edx_1 + 0x14))) * x87_r6_1 / fconvert.t(arg2))
    while (i != 0)
}
