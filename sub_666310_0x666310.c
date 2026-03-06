// 函数名称: sub_666310
// 虚拟地址: 0x666310
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_666310(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ebx = 0
    int128_t* esi = nullptr
    int32_t var_8_1 = 0
    
    if (arg1 != 0)
        esi = *arg1
        
        if (esi != 0)
            ebx = *(esi + 0x268)
            var_8_1 = esi[0x26].d
    
    int32_t* result = arg2
    
    if (result != 0)
        void* edi_1 = *result
        
        if (edi_1 != 0)
            if (esi != 0)
                sub_6622f0(esi, edi_1, 0x7fff, 0xffffffff)
                
                if (*(esi + 0x248) != 0)
                    sub_666530(esi, *(esi + 0x24c))
                    *(esi + 0x248) = 0
            
            sub_666450(edi_1, ebx, var_8_1)
            result = arg2
            *result = 0
    
    if (esi != 0)
        sub_6660e0(esi)
        result = sub_666450(esi, ebx, var_8_1)
        *arg1 = 0
    
    return result
}
