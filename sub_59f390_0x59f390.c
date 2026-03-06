// 函数名称: sub_59f390
// 虚拟地址: 0x59f390
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_59f390(int32_t* arg1 @ esi)
{
    // 第一条实际指令: int32_t result = arg1[4]
    int32_t result = arg1[4]
    int32_t edi = 0
    void* ecx = &arg1[result + 8]
    
    if (arg1[1] * *arg1 * 4 s> 0)
        do
            char* eax_1 = arg1[2] + edi
            *eax_1 = *(ecx + 2)
            eax_1[1] = *(ecx + 1)
            eax_1[2] = *ecx
            eax_1[3] = *(ecx + 3)
            edi += 4
            result = arg1[1] * *arg1 * 4
        while (edi s< result)
    
    return result
}
