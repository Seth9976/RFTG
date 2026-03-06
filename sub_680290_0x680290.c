// 函数名称: sub_680290
// 虚拟地址: 0x680290
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_680290(void* arg1)
{
    // 第一条实际指令: int32_t (** eax_1)(int32_t* arg1) = (**(arg1 + 4))(arg1, 1, 0x40)
    int32_t (** eax_1)(int32_t* arg1) = (**(arg1 + 4))(arg1, 1, 0x40)
    *(arg1 + 0x1bc) = eax_1
    *eax_1 = sub_680010
    int32_t i = 0
    eax_1[0xb] = 0
    eax_1[0xc] = 0
    eax_1[0xd] = 0
    eax_1[0xe] = 0
    int32_t result = (**(arg1 + 4))(arg1, 1, *(arg1 + 0x24) << 8)
    *(arg1 + 0xa0) = result
    int32_t result_1 = result
    
    if (*(arg1 + 0x24) s> 0)
        do
            result = 0xffffffff
            i += 1
            __builtin_memset(result_1, 0xffffffff, 0x100)
            result_1 += 0x100
        while (i s< *(arg1 + 0x24))
    
    return result
}
