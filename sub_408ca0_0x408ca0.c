// 函数名称: sub_408ca0
// 虚拟地址: 0x408ca0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_408ca0()
{
    // 第一条实际指令: void* result = data_27e7fd0
    void* result = data_27e7fd0
    
    if (*(result + 0x2e) == 0)
        float* eax = data_27e7a50
        long double x87_r7_1 = fconvert.t(*eax)
        long double x87_r7_4 = fconvert.t(eax[1])
        *(data_26a44ec + 0x120) = eax[6]
        eax.b = eax[7].b
        sub_4fd680(eax.b)
        void* eax_1 = data_27e7fd4
        *(eax_1 + 0x1c) = fconvert.s(fconvert.t(fconvert.s(x87_r7_4 * fconvert.t(1.25)
            * fconvert.t(0.80000001192092896))))
        *(eax_1 + 0x20) = fconvert.s(fconvert.t(fconvert.s((x87_r7_1 + x87_r7_1) * fconvert.t(0.5))))
        result = data_26a44f0
        
        if (result != 0)
            *(result + 4) = *(data_27e7a50 + 8)
    
    return result
}
