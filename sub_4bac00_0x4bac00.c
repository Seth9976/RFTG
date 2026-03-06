// 函数名称: sub_4bac00
// 虚拟地址: 0x4bac00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4bac00(void* arg1)
{
    // 第一条实际指令: void* edx = data_27e7aa4
    void* edx = data_27e7aa4
    int32_t* eax_2 = sub_4ba720(*(arg1 + 4), *(edx + 0x1c), *(edx + 0x20))
    
    if (eax_2 != 0xffffffff)
        char* eax_3
        int32_t ecx_3
        eax_3, ecx_3 = sub_473ba0(data_27e7aa4 + 0x4ec, eax_2)
        
        if (eax_3 != 0)
            char* esi_1 = data_27e7aa4
            *(esi_1 + 0x30) = fconvert.s(float.t(0))
            *(esi_1 + 0x24) = 1
            ecx_3.b = 0
            *esi_1 = 0
            sub_4ba4f0(ecx_3, esi_1)
            
            if (*(data_27e7fd0 + 0x27) != 0)
                sub_4818d0(eax_3, esi_1)
                return 0
            
            sub_474400(eax_3)
    
    return 0
}
