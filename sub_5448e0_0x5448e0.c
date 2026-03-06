// 函数名称: sub_5448e0
// 虚拟地址: 0x5448e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_5448e0()
{
    // 第一条实际指令: data_3078808 = 1
    data_3078808 = 1
    
    if (data_307882c != 0)
        sub_4c5870("!gOpenGLInterface", &data_83f3d3, "OpenGLGraphics.cpp", 0x3e4, 
            "OpenGLInterfaceCreate")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi = data_26a44e4
    
    if (esi == 0)
        sub_4f4250()
        esi = data_26a44e4
    
    int32_t eax_1 = 0
    int32_t* esi_1
    
    while (true)
        if (1 << (eax_1.b + 4) s>= 0x5040)
            esi_1 = esi + eax_1 * 0x14
            break
        
        eax_1 += 1
        
        if (eax_1 s>= 7)
            esi_1 = esi + 0x8c
            break
    
    esi_1[3] += 1
    int128_t* result
    
    if (esi_1[4] != 0xffffffff)
        if (*esi_1 == 0)
            sub_4f4170(esi_1)
        
        int128_t* result_2 = *esi_1
        *esi_1 = *result_2
        sub_5abfc0(result_2, 0, 0x5040)
        result = result_2
    else
        int128_t* result_1 = sub_4cce80(0x5040)
        sub_5abfc0(result_1, 0, 0x5040)
        result = result_1
    
    if (result == 0)
        data_307882c = 0
        data_3078804 = 0
        return 0
    
    *result = &data_891328
    *(result + 0x4254) = 1
    __builtin_memset(&result[0x424], 0, 0x14)
    *(result + 0x4258) = 0
    data_307882c = result
    data_3078804 = result
    return result
}
