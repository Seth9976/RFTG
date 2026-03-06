// 函数名称: sub_506d70
// 虚拟地址: 0x506d70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_506d70(char* arg1)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    
    while (true)
        int32_t edx
        edx.b = *arg1
        uint32_t esi_1 = zx.d(edx.b)
        int32_t edx_1
        
        if (edx.b u>= 0x80)
            int32_t eax
            eax.b = edx.b
            eax.b &= 0xe0
            
            if (eax.b != 0xc0)
                eax.b = edx.b
                eax.b &= 0xf0
                
                if (eax.b != 0xe0)
                    edx.b &= 0xf8
                    eax.b = edx.b != 0xf0
                    edx_1 = (eax - 1) & 4
                else
                    edx_1 = 3
            else
                edx_1 = 2
        else
            edx_1 = 1
        
        if (edx_1 == 2)
            int32_t eax_4 = sx.d(arg1[1])
            arg1 = &arg1[1]
            esi_1 = ((esi_1 & 0x1f) << 6) + (eax_4 & 0x3f)
        else if (edx_1 == 3)
            int32_t edx_9 = sx.d(arg1[2])
            int32_t eax_2 = zx.d(arg1[1]) & 0x3f
            arg1 = &arg1[2]
            esi_1 = (edx_9 & 0x3f) + ((eax_2 + ((esi_1 & 0xf) << 6)) << 6)
        else if (edx_1 == 4)
            int32_t esi_7 =
                ((zx.d(arg1[2]) & 0x3f) << 6) + (((zx.d(arg1[1]) & 0x3f) + ((esi_1 & 7) << 6)) << 0xc)
            int32_t edx_8 = sx.d(arg1[3])
            arg1 = &arg1[3]
            esi_1 = esi_7 + (edx_8 & 0x3f)
        
        arg1 = &arg1[1]
        
        if (esi_1 == 0)
            break
        
        result += 1
    
    return result
}
