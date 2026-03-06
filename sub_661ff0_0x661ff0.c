// 函数名称: sub_661ff0
// 虚拟地址: 0x661ff0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_661ff0(int32_t* arg1, int32_t* arg2, void** arg3)
{
    // 第一条实际指令: int32_t* result = arg1
    int32_t* result = arg1
    int128_t* edi = nullptr
    int128_t* ebx = nullptr
    
    if (result != 0)
        int128_t* esi_1 = *result
        
        if (esi_1 != 0)
            int32_t eax = *(esi_1 + 0x268)
            int32_t ecx_1 = esi_1[0x26].d
            
            if (arg2 != 0)
                edi = *arg2
            
            if (arg3 != 0)
                ebx = *arg3
            
            sub_661c60(esi_1, edi, ebx)
            
            if (edi != 0)
                sub_6622f0(esi_1, edi, 0x4000, 0xffffffff)
                sub_666450(edi, eax, ecx_1)
                *arg2 = 0
            
            if (ebx != 0)
                sub_6622f0(esi_1, ebx, 0x4000, 0xffffffff)
                sub_666450(ebx, eax, ecx_1)
                *arg3 = nullptr
            
            result = sub_666450(esi_1, eax, ecx_1)
            *arg1 = 0
    
    return result
}
