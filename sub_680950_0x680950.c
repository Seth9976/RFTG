// 函数名称: sub_680950
// 虚拟地址: 0x680950
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* (**sub_680950(void* arg1, int32_t arg2))(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* (** eax_1)(int32_t* arg1, int32_t arg2) = (**(arg1 + 4))(arg1, 1, 0x1c)
    int32_t* (** eax_1)(int32_t* arg1, int32_t arg2) = (**(arg1 + 4))(arg1, 1, 0x1c)
    int32_t* (** edi)(int32_t* arg1, int32_t arg2) = eax_1
    *(arg1 + 0x1b0) = edi
    *edi = sub_680840
    edi[2] = 0
    edi[3] = 0
    
    if (*(arg1 + 0x54) != 0)
        int32_t eax_2 = *(arg1 + 0x138)
        edi[4] = eax_2
        
        if (arg2 != 0)
            void* ebx = *(arg1 + 4)
            int32_t eax_3 = sub_67d190(*(arg1 + 0x74), eax_2)
            int32_t eax_6 = (*(ebx + 0x10))(arg1, 1, 0, *(arg1 + 0x78) * *(arg1 + 0x70), eax_3, eax_2)
            edi[2] = eax_6
            return eax_6
        
        eax_1 = (*(*(arg1 + 4) + 8))(arg1, 1, *(arg1 + 0x78) * *(arg1 + 0x70), eax_2)
        edi[3] = eax_1
    
    return eax_1
}
