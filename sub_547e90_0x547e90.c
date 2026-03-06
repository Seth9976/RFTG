// 函数名称: sub_547e90
// 虚拟地址: 0x547e90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __stdcallsub_547e90(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int128_t* result = sub_5abfc0(arg2, 0xff, 0x3c)
    int128_t* result = sub_5abfc0(arg2, 0xff, 0x3c)
    void* ecx = *(arg1 + 0x350)
    int32_t i = 0
    
    if (*(ecx + 0x430) s> 0)
        result = 0x438
        
        do
            switch (*(result + ecx - 4) - 0x53)
                case 0, 1, 2, 3, 4, 5, 6
                    int32_t ecx_3 = *(arg1 + 0x350)
                    arg2[*(result + ecx_3 - 4) - 0x50] = *(result + ecx_3)
                case 0xa
                    *arg2 = *(result + ecx)
                case 0xb
                    arg2[1] = *(result + ecx)
                case 0xc
                    arg2[2] = *(result + ecx)
                case 0x18
                    arg2[0xc] = *(result + ecx)
                case 0x2a
                    arg2[0xd] = *(result + ecx - 0x42c)
                case 0x2b
                    arg2[0xe] = *(result + ecx - 0x42c)
                case 0x2c
                    arg2[0xb] = *(result + ecx)
            
            ecx = *(arg1 + 0x350)
            i += 1
            result += 0x14
        while (i s< *(ecx + 0x430))
    
    return result
}
