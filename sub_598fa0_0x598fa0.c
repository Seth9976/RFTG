// 函数名称: sub_598fa0
// 虚拟地址: 0x598fa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_598fa0(int32_t* arg1 @ esi)
{
    // 第一条实际指令: int32_t i = arg1[2]
    int32_t i = arg1[2]
    int32_t ebx = arg1[1]
    int32_t edi = arg1[3]
    int32_t result
    
    do
        char* eax_1 = *arg1
        uint32_t eax_2
        
        if (eax_1 u< ebx)
            char edx = *eax_1
            *arg1 = &eax_1[1]
            eax_2 = zx.d(edx)
        else
            eax_2 = 0
        
        result = eax_2 << i.b
        i += 8
        edi |= result
    while (i s<= 0x18)
    
    arg1[3] = edi
    arg1[2] = i
    return result
}
