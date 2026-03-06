// 函数名称: sub_508330
// 虚拟地址: 0x508330
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_508330(float* arg1)
{
    // 第一条实际指令: if (data_26a4600 == 0)
    if (data_26a4600 == 0)
        sub_4c5870("gVR.isDrawingEye", &data_83f3d3, "VR.cpp", 0x1de, "VRGetCurrentEyeViewRect")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx = data_26a4564
    
    if (ecx != 0x3e8)
        *arg1 = (&data_26a4544)[ecx * 4]
        arg1[1] = (&data_26a4548)[ecx * 4]
        int32_t ecx_5 = (&data_26a4550)[ecx * 4]
        arg1[2] = (&data_26a454c)[ecx * 4]
        arg1[3] = ecx_5
        return 
    
    long double x87_r6 = fconvert.t(data_26a4544)
    long double x87_r5_1 = fconvert.t(0.5)
    long double x87_r6_2 = fconvert.t(data_26a455c)
    *arg1 = fconvert.s(x87_r6 + (fconvert.t(data_26a4554) - x87_r6) * x87_r5_1)
    long double x87_r5_3 = fconvert.t(data_26a454c)
    long double x87_r5_6 = fconvert.t(data_26a4548)
    long double x87_r6_10 = fconvert.t(data_26a4560)
    arg1[1] = fconvert.s(x87_r5_6 + (fconvert.t(data_26a4558) - x87_r5_6) * x87_r5_1)
    long double x87_r5_9 = fconvert.t(data_26a4550)
    arg1[2] = fconvert.s(x87_r5_3 + (x87_r6_2 - x87_r5_3) * x87_r5_1)
    arg1[3] = fconvert.s(x87_r5_1 * (x87_r6_10 - x87_r5_9) + x87_r5_9)
}
