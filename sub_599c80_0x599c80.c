// 函数名称: sub_599c80
// 虚拟地址: 0x599c80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_599c80(void* arg1 @ esi)
{
    // 第一条实际指令: void* i = nullptr
    for (void* i = nullptr; i s< 8; i += 1)
        char* eax_1 = *(arg1 + 0xa8)
        char eax_3
        char ecx
        
        if (eax_1 u< *(arg1 + 0xac))
            ecx = *eax_1
            *(arg1 + 0xa8) = &eax_1[1]
            eax_3 = ecx
        else if (*(arg1 + 0x20) == 0)
            eax_3 = 0
        else
            int32_t eax_5 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
            
            if (eax_5 != 0)
                *(arg1 + 0xa8) = arg1 + 0x28
                *(arg1 + 0xac) = arg1 + 0x28 + eax_5
            else
                *(arg1 + 0x20) = eax_5
                char* eax_7 = *(arg1 + 0xac) - 1
                *(arg1 + 0xa8) = eax_7
                *eax_7 = 0
            
            char* eax_8 = *(arg1 + 0xa8)
            ecx = *eax_8
            *(arg1 + 0xa8) = &eax_8[1]
            eax_3 = ecx
        
        if (eax_3 != *(i + 0x8bc810))
            data_273ac1c = "bad png sig"
            return 0
    
    return 1
}
