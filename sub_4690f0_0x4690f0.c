// 函数名称: sub_4690f0
// 虚拟地址: 0x4690f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4690f0(void* arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: if (*(arg1 + 0x1dc) == 1 && *(arg1 + 0x18c) == 0 && *(arg1 + 0x1d0) == *(arg3 + 0x8c) && *(arg1 + 0x188) == *(arg3 + 0x44) && *(arg1 + 0x190) == *(arg3 + 0x4c))
    if (*(arg1 + 0x1dc) == 1 && *(arg1 + 0x18c) == 0 && *(arg1 + 0x1d0) == *(arg3 + 0x8c)
            && *(arg1 + 0x188) == *(arg3 + 0x44) && *(arg1 + 0x190) == *(arg3 + 0x4c))
        int32_t edx_2
        edx_2.b = *(arg1 + 0x1c9)
        
        if (edx_2.b == *(arg3 + 0x85))
            edx_2.b = *(arg1 + 0x1ca)
            
            if (edx_2.b == *(arg3 + 0x86))
                edx_2.b = *(arg1 + 0x1c8)
                
                if (edx_2.b == *(arg3 + 0x84))
                    edx_2.b = *(arg1 + 0x1cb)
                    
                    if (edx_2.b == *(arg3 + 0x87))
                        arg1.b = *(arg1 + 0x1cc)
                        arg1.b = arg1.b == *(arg3 + 0x88)
                        return arg1
    
    arg1.b = 0
    return arg1
}
