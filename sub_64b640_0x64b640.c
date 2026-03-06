// 函数名称: sub_64b640
// 虚拟地址: 0x64b640
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_64b640(int128_t* arg1, void* arg2)
{
    // 第一条实际指令: if (sub_64b230(arg1, arg2, 1) != 0)
    if (sub_64b230(arg1, arg2, 1) != 0)
        return 1
    
    int32_t** esi = *(arg1 + 0x68)
    float* eax_2
    int32_t ecx
    int32_t edx
    eax_2, ecx, edx = sub_64be00(arg2)
    esi[0xf] = eax_2
    int32_t* eax_3 = _calloc(eax_2, edx, ecx, 1, 0xb4)
    *esi = eax_3
    sub_657740(eax_3, arg2)
    sub_64b7a0(arg2, &esi[0x14])
    arg1[4].d = 3
    *(arg1 + 0x44) = 0
    return 0
}
