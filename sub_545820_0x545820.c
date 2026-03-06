// 函数名称: sub_545820
// 虚拟地址: 0x545820
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_545820(void* arg1, uint32_t arg2, uint32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int128_t* eax = sub_54b770(arg1 + 0x4240)
    int128_t* eax = sub_54b770(arg1 + 0x4240)
    int32_t params
    int32_t params_2 = params
    uint32_t textures
    uint32_t width = textures
    __builtin_memcpy(eax + 0xe8, 
        "\x2f\x81\x00\x00\x2f\x81\x00\x00\x2f\x81\x00\x00\x01\x26\x00\x00\x01\x26\x00\x00", 0x14)
    *(eax + 0x134) = arg2
    *eax = 0
    *(eax + 4) = 2
    *(eax + 0xfc) = 0
    eax[0x14].b = params_2 == 1
    int32_t ecx_1 = *(arg1 + 0x5038)
    uint32_t height = arg3
    int32_t eax_2 = 1
    
    while (width s> ecx_1 || height s> ecx_1)
        width u>>= 1
        height u>>= 1
        eax_2 += 1
    
    *(eax + 0x144) = eax_2
    
    if (params_2 == 4)
        data_30798b8(1, eax + 0xe4)
        data_307988c(0x8d41, *(eax + 0xe4))
        data_30798d0(0x8d41, 0x81a5, width, height)
        return *(eax + 0x148)
    
    if (params_2 == 6)
        if (*(data_27e7fd0 + 0x1c) s> 0)
            data_30798b8(1, eax + 0xe4)
            data_307988c(0x8d41, *(eax + 0xe4))
            data_30798d4(0x8d41, *(data_27e7fd0 + 0x1c), 0x81a5, width, height)
            data_307988c(0x8d41, 0)
            return *(eax + 0x148)
        
        sub_4c5870("gAppInterface->mMultisamples > 0", &data_83f3d3, "OpenGLGraphics.cpp", 0x630, 
            "OpenGLInterface::CreateTextureBuffer")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (params_2 != 5)
        glGenTextures(1, &textures)
        bool cond:0_1 = params != 1
        uint32_t texture = textures
        void* ecx_7 = data_307882c
        *eax = texture
        uint32_t target
        
        if (cond:0_1)
            if (*(ecx_7 + 0x409c) != texture)
                *(ecx_7 + 0x409c) = texture
                
                if (*(ecx_7 + 0x4098) != 0)
                    *(ecx_7 + 0x4098) = 0
                    data_30792c4(0x84c0)
                
                glBindTexture(0xde1, texture)
            
            target = 0xde1
        else
            if (*(ecx_7 + 0x415c) != texture)
                *(ecx_7 + 0x415c) = texture
                
                if (*(ecx_7 + 0x4098) != 0)
                    *(ecx_7 + 0x4098) = 0
                    data_30792c4(0x84c0)
                
                glBindTexture(0x8513, texture)
            
            target = 0x8513
        
        glTexParameteri(target, 0x2800, *(eax + 0xf8))
        glTexParameteri(target, 0x2801, *(eax + 0xf4))
        glTexParameteri(target, 0x2802, *(eax + 0xe8))
        glTexParameteri(target, 0x2803, *(eax + 0xec))
        glTexParameteri(target, 0x8072, eax[0xf].d)
        int32_t params_1 = params
        
        if (params_1 != 0 && params_1 != 1)
            if (params_1 != 3)
                sub_4c5870("Halt", &data_83f3d3, "OpenGLGraphics.cpp", 0x6c2, 
                    "OpenGLInterface::CreateTextureBuffer")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            glGetIntegerv(0x8ca6, &params)
            data_30798b4(1, &eax[0xe])
            void* eax_19 = sub_545200(data_3079888(0x8d40, eax[0xe].d), arg4)
            glTexImage2D(target, 0, *(eax_19 + 4), width, height, 0, *(eax_19 + 8), *(eax_19 + 0xc), 
                nullptr)
            data_30798a8(0x8d40, 0x8ce0, 0xde1, textures, 0)
            
            if (data_3079894(0x8d40) != 0x8cd5)
                sub_4c5870("status == GL_FRAMEBUFFER_COMPLETE", &data_83f3d3, "OpenGLGraphics.cpp", 
                    0x6bb, "OpenGLInterface::CreateTextureBuffer")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            data_3079888(0x8d40, params)
    else
        if (*(data_27e7fd0 + 0x1c) s<= 0)
            sub_4c5870("gAppInterface->mMultisamples > 0", &data_83f3d3, "OpenGLGraphics.cpp", 0x649, 
                "OpenGLInterface::CreateTextureBuffer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        glGetIntegerv(0x8ca6, &params)
        data_30798b4(1, &eax[0xe])
        data_3079888(0x8d40, eax[0xe].d)
        data_30798b8(1, eax + 0xe4)
        data_307988c(0x8d41, *(eax + 0xe4))
        data_30798d4(0x8d41, *(data_27e7fd0 + 0x1c), 0x8058, width, height)
        data_307988c(0x8d41, 0)
        data_30798a0(0x8d40, 0x8ce0, 0x8d41, *(eax + 0xe4))
        
        if (data_3079894(0x8d40) != 0x8cd5)
            sub_4c5870("status == GL_FRAMEBUFFER_COMPLETE", &data_83f3d3, "OpenGLGraphics.cpp", 0x681, 
                "OpenGLInterface::CreateTextureBuffer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        data_3079888(0x8d40, params)
    
    return *(eax + 0x148)
}
