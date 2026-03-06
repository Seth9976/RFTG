// 函数名称: sub_4022e0
// 虚拟地址: 0x4022e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_4022e0()
{
    // 第一条实际指令: void* eax = data_27e7a60
    void* eax = data_27e7a60
    int32_t edx
    sub_4c6600(eax, edx, *(eax + 8), 0x8c8724, *(eax + 4))
    void* eax_1 = data_27e7a60
    int32_t ecx_2 = *(eax_1 + 4)
    char* eax_2 = *(eax_1 + 8)
    *(data_27e7a40 + 0x20) = 1
    int128_t* result = sub_4c70a0(eax_2, ecx_2)
    
    if (result != 0)
        *(result + 0x14) = 1
        *(result + 0x24) = 1
        *(result + 0x28) = 2
        result = *(result + 0x48)
    
    void* ecx_3 = data_27e7a40
    bool cond:0 = *(ecx_3 + 0x24) != 0
    *(ecx_3 + 0x28) = result
    
    if (not(cond:0))
        *(ecx_3 + 0x24) = 4
    
    return result
}
