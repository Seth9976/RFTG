// 函数名称: sub_5ca230
// 虚拟地址: 0x5ca230
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ca230(char* arg1)
{
    // 第一条实际指令: void* eax = data_bed820
    void* eax = data_bed820
    
    if (eax == 0)
        return sub_5c8d60() __tailcall
    
    if (*(eax + 0x15c) != 0)
        if (arg1 != 0)
            if (sub_5cd590(arg1, eax + 0x160) != 0)
                sub_5cce60("OpenGL library already loaded")
                return 0xffffffff
            
            eax = data_bed820
        
        *(eax + 0x15c) += 1
        return 0
    
    int32_t ecx_2 = *(eax + 0x88)
    
    if (ecx_2 == 0)
        sub_5cce60("No dynamic GL support in video driver")
        return 0xffffffff
    
    int32_t result = ecx_2(eax, arg1)
    
    if (result == 0)
        void* eax_5 = data_bed820
        *(eax_5 + 0x15c) += 1
        return result
    
    void* ecx_3 = data_bed820
    int32_t eax_7 = *(ecx_3 + 0x90)
    
    if (eax_7 != 0)
        eax_7(ecx_3)
    
    return result
}
