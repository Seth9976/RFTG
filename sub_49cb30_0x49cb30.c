// 函数名称: sub_49cb30
// 虚拟地址: 0x49cb30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49cb30(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg1[6].b == 0 && *arg1 != 0)
    if (arg1[6].b == 0 && *arg1 != 0)
        int32_t ecx_1 = arg1[1]
        
        if (*(ecx_1 + (arg2 << 2) + 0x1ec0) s< *(ecx_1 + (arg2 << 2) + 0x1ed8))
            int32_t esi_2 = *(ecx_1 + (arg2 << 2) + 0x1ec0)
            int32_t result = *(ecx_1 + ((arg2 * 0x148 + esi_2) << 2))
            *(ecx_1 + (arg2 << 2) + 0x1ec0) = esi_2 + 1
            
            if (result s>= 0)
                return result
            
            return sub_49ca40(arg1)
    
    return sub_49ca40(arg1) __tailcall
}
