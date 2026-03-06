// 函数名称: sub_5b8398
// 虚拟地址: 0x5b8398
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __fastcallsub_5b8398(int128_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int128_t* result = arg1
    int128_t* result = arg1
    void* eax_1 = arg1 & 0xf
    
    if (eax_1 != 0)
        int32_t i_10 = (neg.d(eax_1) + 0x10) & 3
        
        if (i_10 != 0)
            int32_t i
            
            do
                *arg1 = 0
                arg1 += 1
                i = i_10
                i_10 -= 1
            while (i != 1)
        
        uint32_t i_11 = (neg.d(eax_1) + 0x10) u>> 2
        
        if (i_11 != 0)
            uint32_t i_1
            
            do
                *arg1 = 0
                arg1 += 4
                i_1 = i_11
                i_11 -= 1
            while (i_1 != 1)
        
        arg2 -= neg.d(eax_1) + 0x10
    
    int32_t edx = arg2 & 0x7f
    uint32_t i_6 = arg2 u>> 7
    
    if (i_6 != 0)
        uint32_t i_2
        
        do
            __builtin_memset(arg1, 0, 0x80)
            arg1 = &arg1[8]
            i_2 = i_6
            i_6 -= 1
        while (i_2 != 1)
    
    if (edx != 0)
        uint32_t i_7 = edx u>> 4
        
        if (i_7 != 0)
            uint32_t i_3
            
            do
                *arg1 = zx.o(0)
                arg1 = &arg1[1]
                i_3 = i_7
                i_7 -= 1
            while (i_3 != 1)
        
        int32_t edx_1 = edx & 0xf
        
        if (edx_1 != 0)
            uint32_t i_9 = edx_1 u>> 2
            
            if (i_9 != 0)
                uint32_t i_4
                
                do
                    *arg1 = 0
                    arg1 += 4
                    i_4 = i_9
                    i_9 -= 1
                while (i_4 != 1)
            
            int32_t i_8 = edx_1 & 3
            
            if (i_8 != 0)
                int32_t i_5
                
                do
                    *arg1 = 0
                    arg1 += 1
                    i_5 = i_8
                    i_8 -= 1
                while (i_5 != 1)
    
    return result
}
