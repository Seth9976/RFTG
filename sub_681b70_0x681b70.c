// 函数名称: sub_681b70
// 虚拟地址: 0x681b70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_681b70(void* arg1)
{
    // 第一条实际指令: void* (** eax_1)(void* arg1) = (**(arg1 + 4))(arg1, 1, 0x30)
    void* (** eax_1)(void* arg1) = (**(arg1 + 4))(arg1, 1, 0x30)
    *(arg1 + 0x1c4) = eax_1
    *eax_1 = sub_681720
    eax_1[2] = 0
    int32_t edx_1 = *(arg1 + 0x78) * *(arg1 + 0x70)
    eax_1[0xa] = edx_1
    
    if (*(arg1 + 0x138) != 2)
        eax_1[8] = 0
        eax_1[1] = sub_681800
        eax_1[3] = sub_681840
        return sub_681650(arg1) __tailcall
    
    eax_1[1] = sub_681740
    eax_1[3] = sub_681990
    eax_1[8] = (*(*(arg1 + 4) + 4))(arg1, 1, edx_1)
    return sub_681650(arg1) __tailcall
}
