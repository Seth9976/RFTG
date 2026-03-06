// 函数名称: sub_4207a0
// 虚拟地址: 0x4207a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4207a0()
{
    // 第一条实际指令: void* eax = data_27e7a40
    void* eax = data_27e7a40
    *(*(eax + 0x548) + 0x1c8) = 0
    char eax_2 = sub_420730(*(eax + 0x74))
    void* edi = data_27e7a40
    
    if (eax_2 != 0)
        void* eax_3 = *(edi + 0x548)
        *(eax_3 + (*(eax_3 + 0x1c8) << 2) + 0x188) = 0
        *(eax_3 + 0x1c8) += 1
    
    void var_8
    
    if (sub_419400(&var_8) == 0 || *(data_27e7a54 + 0x204) s> 0)
        void* eax_5 = *(edi + 0x548)
        *(eax_5 + (*(eax_5 + 0x1c8) << 2) + 0x188) = 1
        *(eax_5 + 0x1c8) += 1
    
    void* eax_6 = *(edi + 0x548)
    *(eax_6 + (*(eax_6 + 0x1c8) << 2) + 0x188) = 2
    *(eax_6 + 0x1c8) += 1
    void* eax_7 = *(edi + 0x548)
    *(eax_7 + (*(eax_7 + 0x1c8) << 2) + 0x188) = 3
    *(eax_7 + 0x1c8) += 1
    char eax_8 = sub_41e630()
    void* ecx_3 = data_27e7a40
    
    if (eax_8 != 0)
        void* eax_9 = *(ecx_3 + 0x548)
        *(eax_9 + (*(eax_9 + 0x1c8) << 2) + 0x188) = 4
        *(eax_9 + 0x1c8) += 1
    
    void* eax_10 = *(ecx_3 + 0x548)
    *(eax_10 + (*(eax_10 + 0x1c8) << 2) + 0x188) = 5
    *(eax_10 + 0x1c8) += 1
    char eax_11 = sub_41e630()
    void* edi_1 = data_27e7a40
    
    if (eax_11 != 0)
        void* eax_12 = *(edi_1 + 0x548)
        *(eax_12 + (*(eax_12 + 0x1c8) << 2) + 0x188) = 6
        *(eax_12 + 0x1c8) += 1
    
    void* eax_13 = *(edi_1 + 0x548)
    *(eax_13 + (*(eax_13 + 0x1c8) << 2) + 0x188) = 7
    *(eax_13 + 0x1c8) += 1
    char eax_14 = sub_419400(&var_8)
    void* result
    
    if (eax_14 != 0)
        result = data_27e7a54
    
    if (eax_14 == 0 || *(result + 0x204) s> 1)
        void* eax_15 = *(edi_1 + 0x548)
        *(eax_15 + (*(eax_15 + 0x1c8) << 2) + 0x188) = 8
        *(eax_15 + 0x1c8) += 1
        result = *(edi_1 + 0x548)
        *(result + (*(result + 0x1c8) << 2) + 0x188) = 9
        *(result + 0x1c8) += 1
    
    return result
}
