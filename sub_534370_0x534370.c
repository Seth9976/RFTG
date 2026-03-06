// 函数名称: sub_534370
// 虚拟地址: 0x534370
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

bool __convention("regparm")sub_534370(int32_t* arg1, int32_t arg2, int32_t arg3, void* arg4)
{
    // 第一条实际指令: void* eax_1 = sub_531280(arg3, arg2, &data_8bd334)
    void* eax_1 = sub_531280(arg3, arg2, &data_8bd334)
    *(arg4 + 8) = 0
    *(arg4 + 0xc) = 0
    
    switch (*(eax_1 + 0x10) - 1)
        case 0
            *(arg4 + 4) = sub_530e40(arg1, arg3)
            return (*(*data_3078804 + 0x78))(arg3, arg1, arg4) != 0
        case 3
            *(arg4 + 4) = fconvert.s(sub_530fb0(arg1, arg3))
            return (*(*data_3078804 + 0x78))(arg3, arg1, arg4) != 0
        case 9
            *(arg4 + 4) = zx.d(sub_530ef0(arg1, arg3))
            return (*(*data_3078804 + 0x78))(arg3, arg1, arg4) != 0
        case 0xe
            *(arg4 + 4) = sub_5311d0(arg1, arg3)
            return (*(*data_3078804 + 0x78))(arg3, arg1, arg4) != 0
        case 0x27
            int32_t* eax_10 = sub_531120(arg1, arg3, data_30d72f0)
            
            if (eax_10 != 0)
                *(arg4 + 4) = sub_4e3990(*eax_10, eax_10[1], eax_10[2], eax_10[3])
                return (*(*data_3078804 + 0x78))(arg3, arg1, arg4) != 0
            
            sub_4c5870("pColor", &data_83f3d3, "Material.cpp", 0x27d, 
                "sMaterialFunctionalRenderStateValueFromConstant")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        case 0x28
            int32_t* eax_8 = sub_531120(arg1, arg3, data_30d72f4)
            
            if (eax_8 == 0)
                return (*(*data_3078804 + 0x78))(arg3, arg1, arg4) != 0
            
            *(arg4 + 4) = sub_4db680(*eax_8)
            return (*(*data_3078804 + 0x78))(arg3, arg1, arg4) != 0
    
    sub_4c5870("Halt", &data_83f3d3, "Material.cpp", 0x282, 
        "sMaterialFunctionalRenderStateValueFromConstant")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
