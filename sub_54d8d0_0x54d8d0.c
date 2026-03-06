// 函数名称: sub_54d8d0
// 虚拟地址: 0x54d8d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_54d8d0(int32_t* arg1, int32_t arg2, float* arg3)
{
    // 第一条实际指令: if (arg2 u> 5)
    if (arg2 u> 5)
        sub_4c5870("Halt", &data_83f3d3, "IBLImport.cpp", 0xeb, "FaceToDirs")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    float var_14_1
    float var_10_1
    float edx_2
    long double x87_r7_2
    
    switch (arg2)
        case 0
            var_14_1 = fconvert.s(fconvert.t(-1f))
            x87_r7_2 = fconvert.t(-0f)
            var_10_1 = fconvert.s(x87_r7_2)
        label_54d8fe:
            *arg3 = var_14_1
            arg3[1] = var_10_1
            edx_2 = fconvert.s(x87_r7_2)
            goto label_54d909
        case 1
            *arg3 = 1f
            arg3[1] = 0
            edx_2 = 0f
        label_54d909:
            arg3[2] = edx_2
            *arg1 = 0
            arg1[1] = 0x3f800000
            arg1[2] = 0
            return 
        case 2
            long double x87_r7_4 = fconvert.t(-0f)
            *arg3 = 0f
            arg3[1] = 0x3f800000
            arg3[2] = 0
            *arg1 = fconvert.s(x87_r7_4)
            arg1[1] = fconvert.s(x87_r7_4)
            arg1[2] = fconvert.s(fconvert.t(-1f))
            return 
        case 3
            long double x87_r7_3 = fconvert.t(-0f)
            *arg3 = fconvert.s(x87_r7_3)
            arg3[1] = fconvert.s(fconvert.t(-1f))
            arg3[2] = fconvert.s(x87_r7_3)
            *arg1 = 0
            arg1[1] = 0
            arg1[2] = 0x3f800000
            return 
        case 4
            *arg3 = 0f
            arg3[1] = 0
            edx_2 = 1f
            goto label_54d909
        case 5
            long double x87_r7_6 = fconvert.t(-0f)
            var_14_1 = fconvert.s(x87_r7_6)
            var_10_1 = fconvert.s(x87_r7_6)
            x87_r7_2 = fconvert.t(-1f)
            goto label_54d8fe
}
