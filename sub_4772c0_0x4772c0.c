// 函数名称: sub_4772c0
// 虚拟地址: 0x4772c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4772c0()
{
    // 第一条实际指令: int32_t performanceCount
    int32_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int32_t performanceCount_1 = performanceCount
    int32_t var_8
    
    if (sub_4c5f30(performanceCount_1 - data_27e7a38, 
            sbb.d(var_8, data_27e7a3c, performanceCount_1 u< data_27e7a38)) s< 0x2710)
        return sub_475260()
    
    void* eax_3 = data_27e7a40
    
    if (eax_3 != 0 && *(eax_3 + 0x2c4960) == 2)
        *(eax_3 + 0x528) = 1
        data_307db1c = 1
    else if (data_307d9c0 != 0 || data_307cd50 != 0 || data_307cd38 != 0 || data_307cd14 != 0
            || data_307cdb8 != 0)
        data_307db1c = 1
        data_307cd50 = 0
        data_307cd38 = 0
        data_307cd14 = 0
        data_307cdb8 = 0
    
    if (data_30d7278 != 0)
        int32_t ecx_2 = data_307c76c
        data_30d7278 = 0
        data_30d6f38 = ecx_2
        return eax_3
    
    int32_t eax_4 = data_30d6f38
    
    if (eax_4 == data_307c1b8 || eax_4 == data_307c1c0 || eax_4 == data_307c4f8)
        data_30d6f38 = data_307c620
    
    return eax_4
}
