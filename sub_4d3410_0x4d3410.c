// 函数名称: sub_4d3410
// 虚拟地址: 0x4d3410
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4d3410(int32_t arg1)
{
    // 第一条实际指令: int32_t i_1 = arg1
    int32_t i_1 = arg1
    
    if (i_1 s<= 0)
        sub_4c5870("updateTicks > 0", &data_83f3d3, "Game.cpp", 0x90, "GameUpdateSimulation")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t i_2 = 1
    sub_4c8c10()
    sub_4d75c0()
    int32_t* ecx = data_27e7fd0
    
    if (*(ecx + 0x25) != 0)
        i_2 = i_1
        i_1 = 1
        data_8c4d34 = fconvert.s(float.t(arg1) * fconvert.t(data_8c4e0c))
    
    if (i_1 s> 0)
        int32_t i
        
        do
            void* eax_2 = data_27e7fcc
            *(eax_2 + 0x4c) = fconvert.s(fconvert.t(data_8c4d34) + fconvert.t(*(eax_2 + 0x4c)))
            (*(*ecx + 0x1c))()
            void* eax_4 = data_27e7fcc
            int32_t* var_14_1
            
            if (*(eax_4 + 0x41) == 0)
                int32_t* ecx_1 = data_27e7fd0
                *(eax_4 + 0x50) = fconvert.s(fconvert.t(data_8c4d34) + fconvert.t(*(eax_4 + 0x50)))
                (*(*ecx_1 + 0x20))(i_2)
                sub_4e8000()
                sub_4eef10()
                sub_531970()
                int32_t* ecx_2 = data_26a44f0
                
                if (ecx_2 != 0)
                    (*(*ecx_2 + 8))()
                
                sub_4c8d10()
                var_14_1 = data_27e7fdc
            else
                var_14_1 = data_27e7fdc
            
            sub_4d7960(var_14_1)
            i = i_1
            i_1 -= 1
            ecx = data_27e7fd0
        while (i != 1)
    
    if (*(ecx + 0x25) != 0)
        data_8c4d34 = fconvert.s(fconvert.t(data_8c4e0c))
    
    int32_t* result = sub_4d7960(data_27e7fdc)
    
    if (data_27e7fd8 == 0)
        return result
    
    return sub_4d6b40()
}
