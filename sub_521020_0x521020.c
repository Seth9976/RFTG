// 函数名称: sub_521020
// 虚拟地址: 0x521020
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_521020(float* arg1, float* arg2)
{
    // 第一条实际指令: if (arg2 == 0)
    if (arg2 == 0)
        sub_4c5870("child0", &data_83f3d3, "SphereTree.cpp", 0xbe, "sNodeCreate")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (arg1 == 0)
        sub_4c5870("child1", &data_83f3d3, "SphereTree.cpp", 0xbf, "sNodeCreate")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* result = data_26a6528
    data_26a6534 += 1
    
    if (result == 0)
        sub_521380()
        result = data_26a6528
    
    data_26a6528 = *result
    float* eax_3 = sub_569250(arg2, arg1)
    int32_t ebx_1 = eax_3[2]
    int32_t edx = eax_3[1]
    int32_t eax_4 = eax_3[3]
    *result = *eax_3
    result[1] = edx
    result[2] = ebx_1
    result[3] = eax_4
    long double x87_r7_1 = fconvert.t(*result) * fconvert.t(1.1000000238418579)
    result[5] = arg2
    *result = fconvert.s(x87_r7_1)
    arg2[4] = result
    result[6] = arg1
    arg1[4] = result
    return result
}
