// 函数名称: sub_5755c0
// 虚拟地址: 0x5755c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_5755c0(int32_t* arg1)
{
    // 第一条实际指令: sub_5756a0()
    sub_5756a0()
    DragAcceptFiles(data_30785e0, 1)
    data_273ac20 = arg1
    int32_t eax_1
    int80_t result
    result, eax_1 = sub_4f6f00(arg1)
    int32_t* esi_1 = data_273ac20
    data_273ac24 = eax_1
    data_273bc2c = 0
    data_273bc30 = 0
    data_273bc31 = 0
    int32_t* eax_2 = sub_4f4890(esi_1)
    int32_t i_1 = eax_2[1]
    int32_t esi_2 = 0
    
    if (i_1 s> 0)
        int32_t* edx_1 = *eax_2
        int32_t i
        
        do
            int32_t eax_3 = *edx_1
            
            if (esi_2 s<= eax_3)
                esi_2 = eax_3
            
            edx_1 = &edx_1[0x46]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    data_273ac28 = esi_2 + 1
    data_27bc43c = fconvert.s(fconvert.t(0.5f))
    float eax_5
    float edx_2
    eax_5, edx_2 = sub_40af40(sub_4f4890(data_273ac20) + 8)
    long double x87_r5 = fconvert.t(100.0)
    data_27bc440 = fconvert.s(fconvert.t(eax_5) - x87_r5)
    data_27bc444 = fconvert.s(fconvert.t(edx_2) - x87_r5)
    sub_5758a0(0)
    return result
}
