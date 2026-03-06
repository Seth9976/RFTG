// 函数名称: sub_66eb70
// 虚拟地址: 0x66eb70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_66eb70(void* arg1, void* arg2)
{
    // 第一条实际指令: void* i = arg1
    void* i = arg1
    char edx = *(i + 9)
    
    if (edx u< 8)
        void* ecx_1 = *(i + 4)
        i = arg2
        void* ecx_2 = ecx_1 + i
        int32_t esi_1
        
        if (edx != 1)
            if (edx == 2)
                esi_1 = 0x8303d0
                goto label_66eba9
            
            if (edx == 4)
                esi_1 = 0x8304d0
                goto label_66eba9
        else
            esi_1 = 0x8302d0
        label_66eba9:
            
            for (; i u< ecx_2; i += 1)
                uint32_t edx_1
                edx_1.b = *(zx.d(*i) + esi_1)
                *i = edx_1.b
    
    return i
}
