// 函数名称: sub_473230
// 虚拟地址: 0x473230
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_473230(int32_t* arg1 @ esi, int32_t arg2)
{
    // 第一条实际指令: void* result = arg1[2]
    void* result = arg1[2]
    int32_t entry_ebx
    
    if (result != 0xffffffff && entry_ebx != 0)
        int32_t edx_1 = arg1[1]
        int32_t eax = *arg1
        result = sub_473150(eax, edx_1, arg2, data_27e7a5c, eax, edx_1, result, arg1[3])
        *(result + 4) += 1
        *(result + 0xc) += entry_ebx
        
        if (arg2 == 0x66)
            int32_t ecx_3 = *(result + 8)
            
            if (ecx_3 == 0 || entry_ebx s< ecx_3)
                *(result + 8) = entry_ebx
                *(result + 0x10) = arg1[5]
        else if (entry_ebx s> *(result + 8))
            *(result + 8) = entry_ebx
            *(result + 0x10) = arg1[5]
    
    return result
}
