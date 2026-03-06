// 函数名称: zip_source_make_command_bitmap
// 虚拟地址: 0x5c1ed0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tzip_source_make_command_bitmap(char arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t i = arg2
    int32_t i = arg2
    int32_t result
    int32_t edx
    edx:result = sx.q(1 << arg1)
    int32_t result_1 = result
    int32_t ebx = edx
    
    if (i s>= 0)
        int32_t* esi_1 = &arg2
        
        do
            int32_t eax_1 = 1 << i.b
            i = esi_1[1]
            esi_1 = &esi_1[1]
            int32_t eax_2
            int32_t edx_1
            edx_1:eax_2 = sx.q(eax_1)
            result_1 |= eax_2
            ebx |= edx_1
        while (i s>= 0)
        
        result = result_1
    
    return result
}
