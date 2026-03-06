// 函数名称: sub_4c98e0
// 虚拟地址: 0x4c98e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4c98e0()
{
    // 第一条实际指令: int32_t performanceCount_1
    int32_t performanceCount_1
    QueryPerformanceCounter(&performanceCount_1)
    void* eax = data_27e7fd0
    
    if (eax != 0 && GetFileAttributesA(*(eax + 4)) != 0xffffffff)
        data_8bc5ff = 0
    
    sub_51c1a0()
    sub_4c5600()
    sub_4f4250()
    
    if (data_27e7bbc != 0)
        sub_4c5870("gpAppData == NULL", &data_83f3d3, "AppController.cpp", 0x55, "AppInitialize")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi = data_26a44e4
    
    if (esi == 0)
        sub_4f4250()
        esi = data_26a44e4
    
    int32_t eax_4 = 0
    int32_t* esi_1
    
    while (true)
        if (1 << (eax_4.b + 4) s>= 0x30)
            esi_1 = esi + eax_4 * 0x14
            break
        
        eax_4 += 1
        
        if (eax_4 s>= 7)
            esi_1 = esi + 0x8c
            break
    
    esi_1[3] += 1
    
    if (*esi_1 == 0)
        sub_4f4170(esi_1)
    
    int32_t* edi = *esi_1
    *esi_1 = *edi
    sub_5abfc0(edi, 0, 0x30)
    data_27e7bbc = edi
    int32_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int32_t* eax_5 = data_27e7bbc
    *eax_5 = performanceCount
    int32_t var_1c
    eax_5[1] = var_1c
    eax_5[2] = performanceCount
    eax_5[4] = fconvert.s(float.t(0))
    eax_5[3] = var_1c
    long double x87_r7_1
    
    if (*(data_27e7fd0 + 0x27) == 0)
        x87_r7_1 = fconvert.t(0.00999999978f)
    else
        x87_r7_1 = fconvert.t(0.0133333337f)
    
    data_8c4e0c = fconvert.s(x87_r7_1)
    sub_51af70()
    data_26a6518 = 0
    data_26a651c = 0
    data_26a6520 = 0x400
    data_26a6524 = 0
    sub_51eb00()
    int32_t* ecx_5 = data_3078804
    
    if (ecx_5 != 0)
        (**ecx_5)()
    
    sub_50acf0()
    sub_4d60d0()
    sub_4cd120()
    sub_508a10()
    sub_5537a0()
    sub_500650()
    sub_508c10()
    sub_51b340()
    QueryPerformanceCounter(&performanceCount)
    int32_t performanceCount_5 = performanceCount
    int32_t performanceCount_6 = performanceCount_1
    int32_t var_14
    uint32_t eax_11 = sub_4c5f30(performanceCount_5 - performanceCount_6, 
        sbb.d(var_1c, var_14, performanceCount_5 u< performanceCount_6))
    sub_506e40()
    int32_t performanceCount_2
    QueryPerformanceCounter(&performanceCount_2)
    int32_t performanceCount_3 = performanceCount_2
    int32_t var_c
    uint32_t var_3c_1 = sub_4c5f30(performanceCount_3 - performanceCount_6, 
        sbb.d(var_c, var_14, performanceCount_3 u< performanceCount_6)) - eax_11
    sub_4c5680("VRInitialize time %d ms")
    sub_4e4e50()
    data_26a6528 = 0
    data_26a652c = 0
    data_26a6530 = 0x400
    data_26a6534 = 0
    sub_521380()
    sub_4e6130()
    sub_4d71a0()
    sub_4c6bc0()
    sub_4fc060(&data_be1c9c)
    sub_4fc280(&data_be1cb8)
    sub_530330()
    sub_5109b0()
    sub_4e3bb0()
    
    if (sub_5a898b("AppProps.txt", U"r") != 0)
        sub_5309b0()
    
    if (sub_5a898b("LocalProps.txt", U"r") != 0)
        sub_5309b0()
    
    void** ecx_8 = data_27e7fd0
    
    if (ecx_8 == 0)
        ecx_8 = &data_be1a84
        data_27e7fd0 = &data_be1a84
    
    (**ecx_8)()
    QueryPerformanceCounter(&performanceCount_2)
    int32_t performanceCount_4 = performanceCount_2
    uint32_t var_3c_2 = sub_4c5f30(performanceCount_4 - performanceCount_6, 
        sbb.d(var_c, var_14, performanceCount_4 u< performanceCount_6))
    return sub_4c5680("AppInitialize time %d ms")
}
