// 函数名称: sub_51c990
// 虚拟地址: 0x51c990
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_51c990(int32_t* arg1 @ esi)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t eax_1 = *data_30785f4
    int32_t var_8_1 = 0
    *arg1 = eax_1
    
    if (eax_1 != 0)
        if (*eax_1 == 0)
            return arg1
        
        void* eax_3 = sub_4c4060(arg1)
        *(eax_3 + 4) += 1
    
    return arg1
}
